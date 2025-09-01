/* Copyright (C) 2020 Open Information Security Foundation
 *
 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * \file
 */

#ifndef SURICATA_DECODE_ESP_H
#define SURICATA_DECODE_ESP_H

/** \brief size of the ESP header */
#define ESP_HEADER_LEN 8

/** \brief Get the spi field off a packet */
#define ESP_GET_SPI(esph) SCNtohl((esph)->spi)
/** \brief Get the sequence field off a packet */
#define ESP_GET_SEQUENCE(esph) SCNtohl((esph)->sequence)

/** \brief ESP Header */
typedef struct ESPHdr_ {
    uint32_t spi;      /** < ESP Security Parameters Index */
    uint32_t sequence; /** < ESP sequence number */
} __attribute__((__packed__)) ESPHdr;

void DecodeESPRegisterTests(void);

#endif /* SURICATA_DECODE_ESP_H */
