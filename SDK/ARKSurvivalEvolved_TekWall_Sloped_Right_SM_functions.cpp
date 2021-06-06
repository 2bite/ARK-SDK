// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekWall_Sloped_Right_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekWall_Sloped_Right_SM.TekWall_Sloped_Right_SM_C.UserConstructionScript
// ()

void ATekWall_Sloped_Right_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWall_Sloped_Right_SM.TekWall_Sloped_Right_SM_C.UserConstructionScript");

	ATekWall_Sloped_Right_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekWall_Sloped_Right_SM.TekWall_Sloped_Right_SM_C.ExecuteUbergraph_TekWall_Sloped_Right_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekWall_Sloped_Right_SM_C::ExecuteUbergraph_TekWall_Sloped_Right_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekWall_Sloped_Right_SM.TekWall_Sloped_Right_SM_C.ExecuteUbergraph_TekWall_Sloped_Right_SM");

	ATekWall_Sloped_Right_SM_C_ExecuteUbergraph_TekWall_Sloped_Right_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
