#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Client_GiantTurtleRaftState_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C
// 0x0001 (0x0951 - 0x0950)
class ABuff_Client_GiantTurtleRaftState_C : public ABuff_Base_C
{
public:
	bool                                               IsInRaftMode;                                             // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Client_GiantTurtleRaftState.Buff_Client_GiantTurtleRaftState_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Client_GiantTurtleRaftState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
