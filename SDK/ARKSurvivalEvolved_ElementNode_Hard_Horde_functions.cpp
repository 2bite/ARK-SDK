// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNode_Hard_Horde_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementNode_Hard_Horde.ElementNode_Hard_Horde_C.UserConstructionScript
// ()

void AElementNode_Hard_Horde_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Hard_Horde.ElementNode_Hard_Horde_C.UserConstructionScript");

	AElementNode_Hard_Horde_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElementNode_Hard_Horde.ElementNode_Hard_Horde_C.ExecuteUbergraph_ElementNode_Hard_Horde
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElementNode_Hard_Horde_C::ExecuteUbergraph_ElementNode_Hard_Horde(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementNode_Hard_Horde.ElementNode_Hard_Horde_C.ExecuteUbergraph_ElementNode_Hard_Horde");

	AElementNode_Hard_Horde_C_ExecuteUbergraph_ElementNode_Hard_Horde_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
