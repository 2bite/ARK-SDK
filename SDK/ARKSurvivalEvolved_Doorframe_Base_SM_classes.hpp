#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Doorframe_Base_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Doorframe_Base_SM.Doorframe_Base_SM_C
// 0x0010 (0x0AD0 - 0x0AC0)
class ADoorframe_Base_SM_C : public AWall_Base_Small_SM_C
{
public:
	class USphereComponent*                            Sphere2;                                                  // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Doorframe_Base_SM.Doorframe_Base_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Doorframe_Base_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
