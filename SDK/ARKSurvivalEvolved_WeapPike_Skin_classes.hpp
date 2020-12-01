#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPike_Skin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPike_Skin.WeapPike_Skin_C
// 0x0010 (0x0D40 - 0x0D30)
class AWeapPike_Skin_C : public AWeapPike_C
{
public:
	class UStaticMeshComponent*                        FPVComponent;                                             // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TPVComponent;                                             // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPike_Skin.WeapPike_Skin_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapPike_Skin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
