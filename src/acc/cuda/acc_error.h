/*------------------------------------------------------------------------------------------------*
 * Copyright (C) by the DBCSR developers group - All rights reserved                              *
 * This file is part of the DBCSR library.                                                        *
 *                                                                                                *
 * For information on the license, see the LICENSE file.                                          *
 * For further information please visit https://dbcsr.cp2k.org                                    *
 * SPDX-License-Identifier: GPL-2.0+                                                              *
 *------------------------------------------------------------------------------------------------*/

#if defined(__CUDA)
# include "acc_cuda.h"
#elif defined(__HIP)
# include "../hip/acc_hip.h"
#endif

int acc_error_check (ACC(Error_t) acc_error);
