// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Floor_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Floor_Tek.Floor_Tek_C.UserConstructionScript
// ()

void AFloor_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Tek.Floor_Tek_C.UserConstructionScript");

	AFloor_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Floor_Tek.Floor_Tek_C.ExecuteUbergraph_Floor_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFloor_Tek_C::ExecuteUbergraph_Floor_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Tek.Floor_Tek_C.ExecuteUbergraph_Floor_Tek");

	AFloor_Tek_C_ExecuteUbergraph_Floor_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
