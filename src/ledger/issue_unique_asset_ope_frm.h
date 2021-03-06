/*
Copyright © Bubi Technologies Co., Ltd. 2017 All Rights Reserved.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
		 http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef ISSUE_UNIQUE_ASSET_OPE_FRM_H_
#define ISSUE_UNIQUE_ASSET_OPE_FRM_H_

#include "operation_frm.h"

namespace bubi {
	class IssueUniqueAssetOpeFrm : public OperationFrm {
	public:
		IssueUniqueAssetOpeFrm(const protocol::Operation &operation, TransactionFrm &tran, AccountFrm::pointer &account_ptr, uint32_t ope_seq);
		~IssueUniqueAssetOpeFrm();
		static int32_t  CheckValid(const protocol::Operation &, const std::string &source_address);
		virtual bool Apply(AccountEntry &entry);
		virtual int32_t GetThreshold();
		//check SQL
		virtual bool CheckUniqueAsset(const protocol::AssetProperty asset_prop);
	private:
		const uint32_t ope_seq_;
		protocol::OperationIssueUniqueAsset operation_issue_unique_asset_;
	};
};

#endif