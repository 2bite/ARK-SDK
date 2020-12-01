#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGenericLowQuality_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C
// 0x0008 (0x06F8 - 0x06F0)
class ADroppedItemGenericLowQuality_C : public ADroppedItemLowQuality
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGenericLowQuality(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
