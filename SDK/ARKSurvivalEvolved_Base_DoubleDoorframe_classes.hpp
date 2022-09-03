#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_DoubleDoorframe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_DoubleDoorframe.Base_DoubleDoorframe_C
// 0x0008 (0x0B00 - 0x0AF8)
class ABase_DoubleDoorframe_C : public ADoorframe_Base_SM_C
{
public:
	class UArrowComponent*                             MeshDirection;                                            // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_DoubleDoorframe.Base_DoubleDoorframe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_DoubleDoorframe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
