#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_MetalIngot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_MetalIngot.PrimalItemResource_MetalIngot_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemResource_MetalIngot_C : public UPrimalItemResource_Craftable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_MetalIngot.PrimalItemResource_MetalIngot_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_MetalIngot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
