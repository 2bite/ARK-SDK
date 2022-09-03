// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseWall_Sloped_Left_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseWall_Sloped_Left_SM.BaseWall_Sloped_Left_SM_C.UserConstructionScript
// ()

void ABaseWall_Sloped_Left_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseWall_Sloped_Left_SM.BaseWall_Sloped_Left_SM_C.UserConstructionScript");

	ABaseWall_Sloped_Left_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseWall_Sloped_Left_SM.BaseWall_Sloped_Left_SM_C.ExecuteUbergraph_BaseWall_Sloped_Left_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABaseWall_Sloped_Left_SM_C::ExecuteUbergraph_BaseWall_Sloped_Left_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseWall_Sloped_Left_SM.BaseWall_Sloped_Left_SM_C.ExecuteUbergraph_BaseWall_Sloped_Left_SM");

	ABaseWall_Sloped_Left_SM_C_ExecuteUbergraph_BaseWall_Sloped_Left_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
