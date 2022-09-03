// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RAG_IceWyvProjIceBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ARAG_IceWyvProjIceBall_C::GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim()
{
	static auto fn = UObject::FindObject<UFunction>("Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim");

	ARAG_IceWyvProjIceBall_C_GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.UserConstructionScript
// ()

void ARAG_IceWyvProjIceBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.UserConstructionScript");

	ARAG_IceWyvProjIceBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.ExecuteUbergraph_RAG_IceWyvProjIceBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARAG_IceWyvProjIceBall_C::ExecuteUbergraph_RAG_IceWyvProjIceBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C.ExecuteUbergraph_RAG_IceWyvProjIceBall");

	ARAG_IceWyvProjIceBall_C_ExecuteUbergraph_RAG_IceWyvProjIceBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
