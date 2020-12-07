#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifle_HoloScope_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapRifle_HoloScope.WeapRifle_HoloScope_C
// 0x0010 (0x0DA0 - 0x0D90)
class AWeapRifle_HoloScope_C : public AWeapRifle_C
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapRifle_HoloScope.WeapRifle_HoloScope_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapRifle_HoloScope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
