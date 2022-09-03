// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalWall_Sloped_Right_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MetalWall_Sloped_Right_SM.MetalWall_Sloped_Right_SM_C.UserConstructionScript
// ()

void AMetalWall_Sloped_Right_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MetalWall_Sloped_Right_SM.MetalWall_Sloped_Right_SM_C.UserConstructionScript");

	AMetalWall_Sloped_Right_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MetalWall_Sloped_Right_SM.MetalWall_Sloped_Right_SM_C.ExecuteUbergraph_MetalWall_Sloped_Right_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMetalWall_Sloped_Right_SM_C::ExecuteUbergraph_MetalWall_Sloped_Right_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MetalWall_Sloped_Right_SM.MetalWall_Sloped_Right_SM_C.ExecuteUbergraph_MetalWall_Sloped_Right_SM");

	AMetalWall_Sloped_Right_SM_C_ExecuteUbergraph_MetalWall_Sloped_Right_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
