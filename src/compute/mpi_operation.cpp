/***************************************************************************
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307  USA
 *
 *  All comments concerning this program package may be sent to the
 *  e-mail address 'xmipp@cnb.csic.es'
 ***************************************************************************/

/**
 * @file mpi_operation.cpp
 * @author Oier Lauzirika Zarrabeitia (oierlauzi@bizkaia.eu)
 * @brief Implementation of mpi_operation.hpp
 * @date 2024-10-26
 * 
 */

#include "mpi_operation.hpp"

namespace xmipp4 
{
namespace compute
{

MPI_Op to_mpi(reduction_operation op) noexcept
{
    switch (op)
    {
    case reduction_operation::sum: return MPI_SUM;
    case reduction_operation::product: return MPI_PROD;
    case reduction_operation::min: return MPI_MIN;
    case reduction_operation::max: return MPI_MAX;
    default: return MPI_OP_NULL;
    }
}

} // namespace compute
} // namespace xmipp4
