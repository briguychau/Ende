/**
 * Simple File Encryption/Decryption System, C++ version
 *
 * Copyright (c) Brian Chau, 2013-2014
 *
 * me@brianchau.ca
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Author information at http://www.brianchau.ca/
 *
 * hash.hpp
 *
 * Header file for hash functions
 */
#ifndef _HASH_HPP
#define _HASH_HPP
class Hash {
private:
	static const char VALS_A[16];
	static const char VALS_B[16];
	static const int SHIFT_A[16];
	static const int SHIFT_B[16];
	static char get(int index, char f, char* arr, long long arrsize);
	static char rotl8(char val, int n);
	static char func(char a, char c, int x);
public:
	static int generateHashA(char* input, long long size);
	static int generateHashB(char* input, long long size);
};
#endif
