// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ThatchWall_Sloped_Left_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThatchWall_Sloped_Left_SM.ThatchWall_Sloped_Left_SM_C.UserConstructionScript
// ()

void AThatchWall_Sloped_Left_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchWall_Sloped_Left_SM.ThatchWall_Sloped_Left_SM_C.UserConstructionScript");

	AThatchWall_Sloped_Left_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThatchWall_Sloped_Left_SM.ThatchWall_Sloped_Left_SM_C.ExecuteUbergraph_ThatchWall_Sloped_Left_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatchWall_Sloped_Left_SM_C::ExecuteUbergraph_ThatchWall_Sloped_Left_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchWall_Sloped_Left_SM.ThatchWall_Sloped_Left_SM_C.ExecuteUbergraph_ThatchWall_Sloped_Left_SM");

	AThatchWall_Sloped_Left_SM_C_ExecuteUbergraph_ThatchWall_Sloped_Left_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
