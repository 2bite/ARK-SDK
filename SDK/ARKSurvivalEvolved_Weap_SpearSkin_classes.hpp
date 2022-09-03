#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_SpearSkin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weap_SpearSkin.Weap_SpearSkin_C
// 0x0010 (0x0EC0 - 0x0EB0)
class AWeap_SpearSkin_C : public AWeapSpear_C
{
public:
	class UStaticMeshComponent*                        FPVComponent;                                             // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TPVComponent;                                             // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weap_SpearSkin.Weap_SpearSkin_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Weap_SpearSkin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
