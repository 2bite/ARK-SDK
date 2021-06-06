#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_DoubleDoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_DoubleDoor.Base_DoubleDoor_C
// 0x0018 (0x0BA8 - 0x0B90)
class ABase_DoubleDoor_C : public ABase_Door_C
{
public:
	class UBoxComponent*                               OutsideBox;                                               // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               InsideBox;                                                // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PlayerCheckBox;                                           // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_DoubleDoor.Base_DoubleDoor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_DoubleDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
