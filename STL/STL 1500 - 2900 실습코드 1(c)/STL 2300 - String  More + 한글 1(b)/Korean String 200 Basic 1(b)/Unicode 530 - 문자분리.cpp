
std::string CTraceModule::Utf8SubString(std::string strUtf8String, int nLimitLength)
{
	std::size_t charCnt = 0;
	std::string strRetVal = strUtf8String;
	std::string::const_iterator itBegin = strRetVal.begin(), itEnd = strRetVal.end();

	try
	{
		while (itBegin != itEnd)
		{
			unsigned char c = *itBegin;
			int nByte = 0;

			// 한 문자가 몇 바이트로 이루어져 있는지 확인한다.
			if ((c & 0x80) == 0)    nByte = 1;
			else if ((c & 0xE0) == 0xC0) nByte = 2;
			else if ((c & 0xF0) == 0xE0) nByte = 3;
			else if ((c & 0xF8) == 0xF0) nByte = 4;
			else
			{
				// Invalid UTF-8
				break;
			}

			if (itEnd - itBegin < nByte)
			{
				// String too short
				break;
			}

			// 연속된 바이트인지 확인
			for (int i = 1; i < nByte; ++i)
			{
				// 상위 2비트를 0x80 과 비교, 동일하지 않으면 연속된 바이트가 아님 (한 문자가 아님)
				if ((itBegin[i] & 0xC0) != 0x80)
				{
					// Unexpected byte sequence
					return strRetVal;
				}
			}

			itBegin += nByte;
			charCnt++;

			// 제한 길이와 문자길이가 동일할 경우 문자열을 자른다.
			if (nLimitLength == charCnt)
			{
				strRetVal.erase(itBegin, itEnd);
				return strRetVal;
			}
		}
	}
	catch (...)
	{
		// Exception
	}

	return strRetVal;
}

int main(){

}
