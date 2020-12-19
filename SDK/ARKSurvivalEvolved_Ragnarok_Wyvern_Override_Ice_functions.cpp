// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ragnarok_Wyvern_Override_Ice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C.UserConstructionScript
// ()

void ARagnarok_Wyvern_Override_Ice_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C.UserConstructionScript");

	ARagnarok_Wyvern_Override_Ice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C.ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARagnarok_Wyvern_Override_Ice_C::ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C.ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice");

	ARagnarok_Wyvern_Override_Ice_C_ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
