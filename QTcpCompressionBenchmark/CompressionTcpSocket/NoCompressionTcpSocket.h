#ifndef NOCOMPRESSIONTCPSOCKET_H
#define NOCOMPRESSIONTCPSOCKET_H

#include "CompressionTcpSocketInterface.h"

class NoCompressionTcpSocket : public CompressionTcpSocketInterface
{
public:
	NoCompressionTcpSocket();
private:
	QByteArray compressData(const QByteArray &rawData);
	QByteArray decompressData(const QByteArray &compressedData,const int &maxSize=16777216);
};

#endif // NOCOMPRESSIONTCPSOCKET_H
