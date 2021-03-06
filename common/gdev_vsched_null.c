/*
 * Copyright (C) Shinpei Kato
 *
 * University of California, Santa Cruz
 * Systems Research Lab.
 *
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

static void gdev_vsched_null_schedule_compute(struct gdev_sched_entity *se)
{
}

static struct gdev_device *gdev_vsched_null_select_next_compute(struct gdev_device *gdev)
{
	return gdev;
}

static void gdev_vsched_null_replenish_compute(struct gdev_device *gdev)
{
}

static void gdev_vsched_null_schedule_memory(struct gdev_sched_entity *se)
{
}

static struct gdev_device *gdev_vsched_null_select_next_memory(struct gdev_device *gdev)
{
	return gdev;
}

static void gdev_vsched_null_replenish_memory(struct gdev_device *gdev)
{
}

/**
 * the Xen Null scheduler implementation.
 */
struct gdev_vsched_policy gdev_vsched_null = {
	.schedule_compute = gdev_vsched_null_schedule_compute,
	.select_next_compute = gdev_vsched_null_select_next_compute,
	.replenish_compute = gdev_vsched_null_replenish_compute,
	.schedule_memory = gdev_vsched_null_schedule_memory,
	.select_next_memory = gdev_vsched_null_select_next_memory,
	.replenish_memory = gdev_vsched_null_replenish_memory,
};
