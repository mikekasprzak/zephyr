# Copyright (c) 2024 Michael Hope <michaelh@juju.nz>
# Copyright (c) 2024 Jianxiong Gu
# Copyright (c) 2025 James Bennion-Pedley
# Copyright (c) 2026 Mike Kasprzak (distraction.engineer)
# SPDX-License-Identifier: Apache-2.0

zephyr_library_sources(soc_irq.S)
zephyr_library_sources_ifdef(CONFIG_USE_VECTOR_TABLE_OFFSET vector.S)
zephyr_library_sources_ifndef(CONFIG_USE_VECTOR_TABLE_OFFSET vector.offset.S)

zephyr_library_sources_ifdef(CONFIG_PM power.c)
zephyr_library_sources_ifdef(CONFIG_ARCH_HAS_CUSTOM_CPU_IDLE soc_idle.c)

zephyr_include_directories(.)
