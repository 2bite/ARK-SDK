#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_ProjEnergyBeam_PreFire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C
// 0x0020 (0x0AC1 - 0x0AA1)
class AEndBoss_ProjEnergyBeam_PreFire_C : public AEndBoss_ProjEnergyBeam_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AA1(0x0007) MISSED OFFSET
	class UParticleSystem*                             PrefireBeamTemplate;                                      // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            TargetAimChar;                                            // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0AB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0AB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0ABA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetLifeSpan_ReturnValue;                         // 0x0ABC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x0AC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBoss_ProjEnergyBeam_PreFire.EndBoss_ProjEnergyBeam_PreFire_C");
		return ptr;
	}


	void UpdateProjectileBeam(float* DeltaTime);
	void UserConstructionScript();
	void DisableAndDestroy();
	void ExecuteUbergraph_EndBoss_ProjEnergyBeam_PreFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
