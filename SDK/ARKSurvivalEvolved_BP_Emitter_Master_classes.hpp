#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Emitter_Master_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Emitter_Master.BP_Emitter_Master_C
// 0x0008 (0x04C0 - 0x04B8)
class ABP_Emitter_Master_C : public AEmitter
{
public:
	class UChildActorComponent*                        AudioChild;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Emitter_Master.BP_Emitter_Master_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Emitter_Master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
