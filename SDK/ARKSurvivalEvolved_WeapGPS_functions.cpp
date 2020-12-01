// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGPS_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGPS.WeapGPS_C.UserConstructionScript
// ()

void AWeapGPS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGPS.WeapGPS_C.UserConstructionScript");

	AWeapGPS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGPS.WeapGPS_C.ExecuteUbergraph_WeapGPS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGPS_C::ExecuteUbergraph_WeapGPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGPS.WeapGPS_C.ExecuteUbergraph_WeapGPS");

	AWeapGPS_C_ExecuteUbergraph_WeapGPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
