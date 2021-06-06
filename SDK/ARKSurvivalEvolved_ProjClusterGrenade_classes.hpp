#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjClusterGrenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjClusterGrenade.ProjClusterGrenade_C
// 0x00B9 (0x07A9 - 0x06F0)
class AProjClusterGrenade_C : public AProjGrenade_C
{
public:
	class UAudioComponent*                             Audio1_1;                                                 // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x06F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x06FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0700(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AShooterProjectile*>                  K2Node_Event_FragmentArray;                               // 0x0788(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0798(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	class AShooterProjectile*                          CallFunc_Array_Get_Item;                                  // 0x07A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x07A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjClusterGrenade.ProjClusterGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode(struct FHitResult* Result);
	void BPSpawnedFragments(TArray<class AShooterProjectile*>* FragmentArray);
	void ExecuteUbergraph_ProjClusterGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
