// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOilJar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapOilJar.WeapOilJar_C.UserConstructionScript
// ()

void AWeapOilJar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOilJar.WeapOilJar_C.UserConstructionScript");

	AWeapOilJar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapOilJar.WeapOilJar_C.ExecuteUbergraph_WeapOilJar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapOilJar_C::ExecuteUbergraph_WeapOilJar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapOilJar.WeapOilJar_C.ExecuteUbergraph_WeapOilJar");

	AWeapOilJar_C_ExecuteUbergraph_WeapOilJar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
