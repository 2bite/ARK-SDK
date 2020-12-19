// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapElectricProd_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapElectricProd.WeapElectricProd_C.BPHandleMeleeAttack
// ()

void AWeapElectricProd_C::BPHandleMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapElectricProd.WeapElectricProd_C.BPHandleMeleeAttack");

	AWeapElectricProd_C_BPHandleMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapElectricProd.WeapElectricProd_C.UserConstructionScript
// ()

void AWeapElectricProd_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapElectricProd.WeapElectricProd_C.UserConstructionScript");

	AWeapElectricProd_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapElectricProd.WeapElectricProd_C.ReactivateParticles
// ()

void AWeapElectricProd_C::ReactivateParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapElectricProd.WeapElectricProd_C.ReactivateParticles");

	AWeapElectricProd_C_ReactivateParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapElectricProd.WeapElectricProd_C.ExecuteUbergraph_WeapElectricProd
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapElectricProd_C::ExecuteUbergraph_WeapElectricProd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapElectricProd.WeapElectricProd_C.ExecuteUbergraph_WeapElectricProd");

	AWeapElectricProd_C_ExecuteUbergraph_WeapElectricProd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
