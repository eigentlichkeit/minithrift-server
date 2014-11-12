#include <iostream>

#include <boost/shared_ptr.hpp>

#include <thrift/TProcessor.h>
#include <thrift/transport/TServerTransport.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TTransport.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/protocol/TJSONProtocol.h>
#include <thrift/server/TSimpleServer.h>

#include "CalculatorHandler.hpp"

using namespace std;

using namespace apache::thrift;
using namespace apache::thrift::transport;
using namespace apache::thrift::protocol;
using namespace apache::thrift::server;

using namespace foo::bar::baz;

using boost::shared_ptr;

int main(int argc, char** argv)
{
    int port = 9090;
    shared_ptr<CalculatorHandler> handler(new CalculatorHandler());
    shared_ptr<TProcessor> processor(new CalculatorProcessor(handler));
    shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
    shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
    shared_ptr<TProtocolFactory> inputProtocolFactory(new TJSONProtocolFactory());
    shared_ptr<TProtocolFactory> outputProtocolFactory(new TJSONProtocolFactory());
    TSimpleServer server(processor, serverTransport,
                         transportFactory, transportFactory,
                         inputProtocolFactory, outputProtocolFactory);

    server.serve();

    return 0;
}

