#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0018 (0x0B58 - 0x0B40)
class ABase_DoubleDoor_C : public ABase_Door_C
{
public:
	class UBoxComponent*                               OutsideBox;                                               // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               InsideBox;                                                // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               PlayerCheckBox;                                           // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
