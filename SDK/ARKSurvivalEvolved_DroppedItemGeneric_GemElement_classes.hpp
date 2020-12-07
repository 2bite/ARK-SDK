#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_GemElement_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_GemElement.DroppedItemGeneric_GemElement_C
// 0x0000 (0x0720 - 0x0720)
class ADroppedItemGeneric_GemElement_C : public ADroppedItemGeneric_Gem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_GemElement.DroppedItemGeneric_GemElement_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_GemElement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
