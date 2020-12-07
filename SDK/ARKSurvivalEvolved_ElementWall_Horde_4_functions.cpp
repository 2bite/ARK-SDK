// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementWall_Horde_4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementWall_Horde_4.ElementWall_Horde_3_C.UserConstructionScript
// ()

void AElementWall_Horde_3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde_4.ElementWall_Horde_3_C.UserConstructionScript");

	AElementWall_Horde_3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementWall_Horde_4.ElementWall_Horde_3_C.ExecuteUbergraph_ElementWall_Horde_4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElementWall_Horde_3_C::ExecuteUbergraph_ElementWall_Horde_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementWall_Horde_4.ElementWall_Horde_3_C.ExecuteUbergraph_ElementWall_Horde_4");

	AElementWall_Horde_3_C_ExecuteUbergraph_ElementWall_Horde_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
