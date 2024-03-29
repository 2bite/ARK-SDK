// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Wire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Wire.Base_Wire_C.UserConstructionScript
// ()

void ABase_Wire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Wire.Base_Wire_C.UserConstructionScript");

	ABase_Wire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Wire.Base_Wire_C.ExecuteUbergraph_Base_Wire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Wire_C::ExecuteUbergraph_Base_Wire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Wire.Base_Wire_C.ExecuteUbergraph_Base_Wire");

	ABase_Wire_C_ExecuteUbergraph_Base_Wire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
