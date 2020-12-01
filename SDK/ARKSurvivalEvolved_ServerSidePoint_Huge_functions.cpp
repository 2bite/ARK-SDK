// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ServerSidePoint_Huge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerSidePoint_Huge.ServerSidePoint_Huge_C.UserConstructionScript
// ()

void AServerSidePoint_Huge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSidePoint_Huge.ServerSidePoint_Huge_C.UserConstructionScript");

	AServerSidePoint_Huge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSidePoint_Huge.ServerSidePoint_Huge_C.ExecuteUbergraph_ServerSidePoint_Huge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AServerSidePoint_Huge_C::ExecuteUbergraph_ServerSidePoint_Huge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSidePoint_Huge.ServerSidePoint_Huge_C.ExecuteUbergraph_ServerSidePoint_Huge");

	AServerSidePoint_Huge_C_ExecuteUbergraph_ServerSidePoint_Huge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
