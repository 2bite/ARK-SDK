// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ragnarok_Wyvern_Override_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.UserConstructionScript
// ()

void ARagnarok_Wyvern_Override_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.UserConstructionScript");

	ARagnarok_Wyvern_Override_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.ReceiveBeginPlay
// ()

void ARagnarok_Wyvern_Override_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.ReceiveBeginPlay");

	ARagnarok_Wyvern_Override_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.ExecuteUbergraph_Ragnarok_Wyvern_Override
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARagnarok_Wyvern_Override_C::ExecuteUbergraph_Ragnarok_Wyvern_Override(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ragnarok_Wyvern_Override.Ragnarok_Wyvern_Override_C.ExecuteUbergraph_Ragnarok_Wyvern_Override");

	ARagnarok_Wyvern_Override_C_ExecuteUbergraph_Ragnarok_Wyvern_Override_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
