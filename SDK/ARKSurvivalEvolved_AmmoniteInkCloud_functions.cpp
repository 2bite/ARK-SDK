// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmmoniteInkCloud_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmmoniteInkCloud.AmmoniteInkCloud_C.UserConstructionScript
// ()

void AAmmoniteInkCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoniteInkCloud.AmmoniteInkCloud_C.UserConstructionScript");

	AAmmoniteInkCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmmoniteInkCloud.AmmoniteInkCloud_C.ExecuteUbergraph_AmmoniteInkCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmmoniteInkCloud_C::ExecuteUbergraph_AmmoniteInkCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmmoniteInkCloud.AmmoniteInkCloud_C.ExecuteUbergraph_AmmoniteInkCloud");

	AAmmoniteInkCloud_C_ExecuteUbergraph_AmmoniteInkCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
