#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeGateframe_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_AdobeGateframe_Large.PrimalItemStructure_AdobeGateframe_Large_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_AdobeGateframe_Large_C : public UPrimalItemStructure_BaseWallWithDoor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_AdobeGateframe_Large.PrimalItemStructure_AdobeGateframe_Large_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_AdobeGateframe_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
