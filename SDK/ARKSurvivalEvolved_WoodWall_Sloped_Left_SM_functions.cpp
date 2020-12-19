// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodWall_Sloped_Left_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodWall_Sloped_Left_SM.WoodWall_Sloped_Left_SM_C.UserConstructionScript
// ()

void AWoodWall_Sloped_Left_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodWall_Sloped_Left_SM.WoodWall_Sloped_Left_SM_C.UserConstructionScript");

	AWoodWall_Sloped_Left_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodWall_Sloped_Left_SM.WoodWall_Sloped_Left_SM_C.ExecuteUbergraph_WoodWall_Sloped_Left_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodWall_Sloped_Left_SM_C::ExecuteUbergraph_WoodWall_Sloped_Left_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodWall_Sloped_Left_SM.WoodWall_Sloped_Left_SM_C.ExecuteUbergraph_WoodWall_Sloped_Left_SM");

	AWoodWall_Sloped_Left_SM_C_ExecuteUbergraph_WoodWall_Sloped_Left_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
