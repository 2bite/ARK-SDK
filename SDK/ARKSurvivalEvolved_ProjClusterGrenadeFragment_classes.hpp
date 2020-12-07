#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjClusterGrenadeFragment_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C
// 0x0077 (0x06D7 - 0x0660)
class AProjClusterGrenadeFragment_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterProjectile*>                  OtherFragments;                                           // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0680(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0684(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterProjectile*>                  K2Node_Event_FragmentArray;                               // 0x0688(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	float                                              K2Node_Event_Damage;                                      // 0x0698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x069C(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_Event_DamageType;                                  // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_Event_InstigatedBy;                                // 0x06A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x06B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructureTurret*                      K2Node_DynamicCast_AsPrimalStructureTurret;               // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x06C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class AShooterProjectile*                          CallFunc_Array_Get_Item;                                  // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x06D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x06D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x06D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x06D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjClusterGrenadeFragment.ProjClusterGrenadeFragment_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPSpawnedFragments(TArray<class AShooterProjectile*>* FragmentArray);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ExecuteUbergraph_ProjClusterGrenadeFragment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
