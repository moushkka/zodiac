/**
 * @file SimpleTextCharmap.h
 * @author Joel Nises
 */

const int charswidth=256;
const int charsheight=256;
const int charsdatalength=4020;
const char *charsdata="Pz8/Pz8/Pz8/Pz8/483tPz9+Q8uA7E4/P6+BS0FBi4FNzYDMnj+ebUPLgMuAzMyAy4DMTUI/ne2AS0PLgMuAS0FBy4BLQ0s/oW1BQYuBzM1OTUFBPz9tQ8uATU/OzT8/780/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/P25OQT8/P7BOQd1ePz9QUU5OQcxATELdPz+Pj05OQYxBjV9fXVBBTs2A3M1OTkFNQUxCXl9dz4DMzZ2PTl5Bjd7d3EBNQcyATV5RzU1BTUFMQsxATl8/P1FOQU1BzM1AzEA/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/P3NPQV4/QUw/P0JPQV5eUE9OP2JdX0HMQExPQU5PUE1CTT9CXd6AS0FNQkxBXlCOTj9BXl9BzEBOTl9QzUDM3UBe/YCNTU6BXVCOTn9fX0HMQExCTEFeUE1CTW9PX3BQzV5Ob19OP1I/QUxvbz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/70CNzUDMQExCzEDMQMxAzEDMQG9cz0BMQk5QT0xCTE9STEJMQm5eUUyBTs1AzEDMQMxAzEBPzEDMQE1PT85ATs6MQU5NUk9PTEJPTEJPTU9OYk1OQk5NUk9PTEJPTEJPbc5ATl1CTk1ST09MQk9MQk9NT1BeT85ATs1AzEBPzEDMQE/MQE9NTlJcUD8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/7kA/Pz9/QsxAzEDMQMzNQMxAzEBMQsxQTEJMT0LMQMxATEJMQkxCTE9CTE9PT0JNUUxCTM9ATEJMQoxBzEDMTU9CzEDMQEyBzEBNUcxNT4FMQkxCjEFMQkxCTE9CTE9PQkxCTVFMQkxPQkxCTEJPTEJMQkxPQkxPT0JMQk1OQkxCTE9CTEJMQkxCTEJMQkxPQkxPT0JMQk1OQkxCTE9CTEJMQsxATELMQMxAzM1ATM9ATELMzUBMQsxATEJMQsxAPz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz/fQNxATd5AzEDMQMxAzEBMQkxCTEJMQkxCzEBMUFFMQV1CTEJMQkxRTUJMQkxCTEJMQk9MUFHsQExCzM1ATk1CTEJMQo3NQE5NUVBsT0JMQk9OTUJMQoxBTEJPTU5RUGyPQUxCT05NQkxBzUBMQk9MT1JPbE+BTEJPTk1CjM5ATEJPTE9ST2zPQExCzEBOzUBMT0JMQsxAzEBMU04/QT8/3UBQy0DcgD8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/a19inV1RT01Rfl5iXV5vUT/OQMxAzEDMQMxAzM1AzEBOT01CTk1CzEDMQF9MQkxPQkxCTU5CTEJOT81PzUBMQkxC3EBMQkxPQsxATU5CTEJOT01CTk2BTEJMQlxCTEJMT0JMUM5ATEJOT01CTk1CTEJMQtxAzEDMQMxAzEBNUUxCTk9NQk5NQkxCzEA//UDsPz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz/uTs1OQT9eP3BQT01Bjj9PP3BQT57NQMxAzEDMQMxNQkxCTEJMQkxCzEBNUE+eTUJMQkxPUE5CTEJMQkxCTEJOTVFQXEJMQkxCTM9ATU5CTEFNgY1NQk1PUE9dQsxAzEBMUk1OQozOQExCzEBMUFBPXUJMUkzPQE3OQExPQkxCT8xATVBPXUJMUj/9QN1Ozd1APz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/P6pQi9DLgIvOoEvPUYvPQMuAi09CT0xPX07B3ExPQVFMTmBOgUxDTE7By4CLT86AS0NbQVFMTsHLgItOQUFMQkxOUd/cXEFRTE5fT0FNQUFMTsHL39xcQVFMz0DLgExOQU6BTE7By4CLT86AS0NbwcuATM6Ay4BMTkFPTVBfTsHcTFBeT2DOkN3LgIvOoEvRy4DbgMuASz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/j0/LgMuAy4DLgMuAy4DLgPuATk6NUouBS0NLQ0tDS0NLQ0tDS0NNXUFNQ01BzI9NzUBMQ0tDS0NLQ0tDS0NLQ01PTUFNQ03OjIFLQUHMTENLQ0tDS0NLQ0tDS0PMTUFMQU1DTY6NQUzBzExDS0NLQ0tDS0NLQ0tDS1BPTkPMjUFLQkyBzIBLQ0tDS0NLQ0tDS0NLQ0uQzU1DTY5OnoFLQ0tDS0NLQ0tDS0NLQ0tQT05DTc2Ay0BQi4FLQ0tDS0NLQ0tDS0NLQ8zMzU1DTc2Ai5FbQ0tDS0NLQ0tDS0NLQ02NQU1OQ0tBjkFL74DLgMuAy4DLgMuAy4BN7YBMPz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/5oDLgMuAy4DLgMuAP1xPUG5DS0NLQ0tDS0NLQ21tT1BuQ0tDS0NLQ0tDS0PMjU9tQkxCfENLQ0tDS0NLQ0tDS0JMQnxBTUFObkNLQ0tDS0NLQ0tDS0JMQk5uT09PQUxBTUNLQ0tDS0NLQ0tDzI3NzUDMQEyBTEJNTkFOQUxDS0NLQ0tDS0NLQ2tPUk9NQU1PQUxBTUNLQ0tDS0NLQ0tDy0DMQMxATFJOzk1uQ0tDS0NLQ0tDS0M/nk/8gMuAy4DLgMuAy4A/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz9GQk1BjUFNT09OQW1BTUFdQU1BTl5CS0FBS4FOT09OQW1BTUFdQU1BTl9OQYyBTU9PTkFtQU1BXUFNQU5dQkxBQYxBTU/NTkHcjUFNQcxAjEFNQcxeQkxBTIFOT09OQV5QTUFPT01BTl9NQUGLgU3NzY1BzEDMjUFNQYxBzEDMQMzNTUJNQY1BTU9PTkFNQU5OQU1BTUF+TkJLQUFLgU5PT05BTUFOTkFNQU1Bfk9OQYyBTU9PTkFNQU5OQU1BTUF+TUJMQUGMQU1PT05BTUFOTkFNQU1Bfj8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/P2dPX01CjU9OQU1BXUFdQV1BTk9PX29OQU1BXUFdQV1BTk9PX81AzEBOTkFNQV1BXUFdQU5PT19NQkxCzkxBTYHMQIuBy4BMgcuAi4HLgE1PX81AzEBOTkFNT28/wcuAy4DNS0JMQs5MgcxATIHLgIuBTIHLgIuBy4BtT01CTEJOTkFdQV1BTUFdQX5PTUJMQk5OQV1BXUFNQV1Bfk9NQkxCTk5BXUFdQU1BXUF+T29OQV1BXUFNQV1BPz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/dUFtQU5dQk1BTk/dgNuQy4BMQW1BTm5BTk/dgNuQy4BMQW1BTt1ATUFOT92A25DLgExBzIBcQc7NS0JNQcyATd2A25DLgExBbUFOT01CTUFOT92A25DLgMuAy4DLgMxAzc1LQsyAy4DLz8uAy4DLkG1OQW5NQk1BTl/NgMuAy5BtTkFuTUJNQU5fzYDLgMuQbU5Bbs1ATUFOX82Ay4DLkG1OQW5eQU5fzYDLgMuQPz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/P5mtzUA/3YCMnmFMj11CTEJdQY1OQU1BTk1CzUxjS09CTUFMQU3PgGxBTEHOTEJMQ0zPzUxPQkxBTUJMUEHMQMxATUFOTUPLQExDjE1BQUvBy01CTEFNQkxQQU9PTUFOTUNLQk1BTEJMQUFLQUFLT0JMQU1BTVBBzEDMQE1BTs5MQk1BTEJMQUHLQUtPQk1BTE9QQUxCTEKNT0+OjYGMzs1NTkJcT99AzEBN3oA/TJFMQj9tP3A/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz8/Pz/L7j9eTlFOT29vP85AzU5PTkFOTkFNQU1Bbj9gUE1PQU5dQU9vTUGN7kBeT05QzUA/T41BTs3uTVFNUE1CTUGdX01CTc7dQH1OQU1CTEGejk9NQszN/UDNTU5BTUI/TUHtP19PzkA/jj8/Pz9DPz8/Pz8/Pz8/Pz8/Pz8/Pz8=";