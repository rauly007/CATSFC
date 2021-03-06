#ifndef _DMA_ADJ_H_
#define _DMA_ADJ_H_

#ifdef DS2_DMA

#ifdef __cplusplus
extern "C" {
#endif

struct SPointerAdjustments {
	/* These are used by the DSTWO-NDS side code. */
	unsigned int  GFXScreen;

	/* These are used by Snes9x. */
	unsigned int  ROM;
};

extern struct SPointerAdjustments PtrAdj;

extern void* AlignedMalloc (unsigned int Size, unsigned int Alignment, unsigned int* Adjustment);
extern void AlignedFree (void* Memory, unsigned int Adjustment);

#ifdef __cplusplus
}
#endif

#endif // DS2_DMA

#endif // !_DMA_ADJ_H_
