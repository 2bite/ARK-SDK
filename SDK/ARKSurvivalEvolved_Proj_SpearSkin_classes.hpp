#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_SpearSkin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_SpearSkin.Proj_SpearSkin_C
// 0x0008 (0x0690 - 0x0688)
class AProj_SpearSkin_C : public AProjSpear_C
{
public:
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_SpearSkin.Proj_SpearSkin_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Proj_SpearSkin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
