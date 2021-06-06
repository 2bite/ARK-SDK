#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekWall_Sloped_Left_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekWall_Sloped_Left_SM.TekWall_Sloped_Left_SM_C
// 0x0008 (0x0AF0 - 0x0AE8)
class ATekWall_Sloped_Left_SM_C : public ABaseWall_Sloped_Left_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekWall_Sloped_Left_SM.TekWall_Sloped_Left_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekWall_Sloped_Left_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
