// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Projectile_IceBreath_IceJumper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DmgType_Projectile_IceBreath_IceJumper.DmgType_Projectile_IceBreath_IceJumper_C.GetFreezeBuffAmountPerHit
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrimalCharacter**       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDmgType_Projectile_IceBreath_IceJumper_C::GetFreezeBuffAmountPerHit(class APrimalCharacter** Target, class AActor** DamageCauser, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DmgType_Projectile_IceBreath_IceJumper.DmgType_Projectile_IceBreath_IceJumper_C.GetFreezeBuffAmountPerHit");

	UDmgType_Projectile_IceBreath_IceJumper_C_GetFreezeBuffAmountPerHit_Params params;
	params.Target = Target;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
