#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackLeader_Dinopithecus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C
// 0x0000 (0x0A58 - 0x0A58)
class ABuff_DinoPackLeader_Dinopithecus_C : public ABuff_DinoPackLeader_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
