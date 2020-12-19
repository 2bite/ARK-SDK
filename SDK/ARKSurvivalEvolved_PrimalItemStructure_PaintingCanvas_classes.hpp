#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PaintingCanvas_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_PaintingCanvas.PrimalItemStructure_PaintingCanvas_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemStructure_PaintingCanvas_C : public UPrimalItemStructure_BaseSign_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_PaintingCanvas.PrimalItemStructure_PaintingCanvas_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_PaintingCanvas(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
