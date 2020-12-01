// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ServerSidePoint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerSidePoint.ServerSidePoint_C.UserConstructionScript
// ()

void AServerSidePoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSidePoint.ServerSidePoint_C.UserConstructionScript");

	AServerSidePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerSidePoint.ServerSidePoint_C.ExecuteUbergraph_ServerSidePoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AServerSidePoint_C::ExecuteUbergraph_ServerSidePoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerSidePoint.ServerSidePoint_C.ExecuteUbergraph_ServerSidePoint");

	AServerSidePoint_C_ExecuteUbergraph_ServerSidePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
