#include "streamGuard.hpp"

finaev::StreamGuard::StreamGuard(std::basic_ios< char > &s):
  s_(s),
  precision_(s.precision()),
  width_(s.width()),
  flags_(s.flags()),
  fill_(s.fill())
{}

finaev::StreamGuard::~StreamGuard()
{
  s_.precision(precision_);
  s_.width(width_);
  s_.flags(flags_);
  s_.fill(fill_);
}
