// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Horde_Spline_Path_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Horde_Spline_Path.Horde_Spline_Path_C.UserConstructionScript
// (NetReliable, NetRequest, Event, Static, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void AHorde_Spline_Path_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Horde_Spline_Path.Horde_Spline_Path_C.UserConstructionScript");

	AHorde_Spline_Path_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Horde_Spline_Path.Horde_Spline_Path_C.ExecuteUbergraph_Horde_Spline_Path
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHorde_Spline_Path_C::ExecuteUbergraph_Horde_Spline_Path(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Horde_Spline_Path.Horde_Spline_Path_C.ExecuteUbergraph_Horde_Spline_Path");

	AHorde_Spline_Path_C_ExecuteUbergraph_Horde_Spline_Path_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
