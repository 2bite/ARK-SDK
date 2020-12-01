// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceBox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceBox.IceBox_C.UserConstructionScript
// ()

void AIceBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceBox.IceBox_C.UserConstructionScript");

	AIceBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceBox.IceBox_C.ExecuteUbergraph_IceBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceBox_C::ExecuteUbergraph_IceBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceBox.IceBox_C.ExecuteUbergraph_IceBox");

	AIceBox_C_ExecuteUbergraph_IceBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
